/* 
 * Copyright (C) 2016 eos - All rights reserved.
 *
 * This file is part of eos. 
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential.
 * Written by Alexandre Arsenault <alx.arsenault@gmail.com>, 13/01/2016
 */

#ifndef _EOS_SYS_WAIT_H_
#define	_EOS_SYS_WAIT_H_

// The <sys/wait.h> header shall define the id_t and pid_t types as described 
// in <sys/types.h>.
#include <sys/types.h>

// The <sys/wait.h> header shall define the siginfo_t type as described 
// in <signal.h>. Inclusion of the <sys/wait.h> header may also make visible 
// all symbols from <signal.h>.
///@todo #include <signal.h>

// The <sys/wait.h> header shall define the following symbolic constants for 
// use with waitpid():

/// [XSI] Report status of continued child process.
#define WCONTINUED  0x00000001

/// [XSI] Do not hang if no status is available; return immediately.
#define WNOHANG		0x00000010

/// [XSI] Report status of stopped child process.
#define WUNTRACED	0x00000100

// The <sys/wait.h> header shall define the following macros for analysis of
//process status values:

/// [XSI] Return exit status.
#define WEXITSTATUS		0

/// [XSI] True if child has been continued.
#define WIFCONTINUED	1

/// [XSI] True if child exited normally.
#define WIFEXITED		2

/// [XSI] True if child exited due to uncaught signal.
#define WIFSIGNALED		3

/// [XSI] True if child is currently stopped.
#define WIFSTOPPED		4

/// [XSI] Return signal number that caused process to stop.
#define WSTOPSIG		5

/// [XSI] Return signal number that caused process to terminate.
#define WTERMSIG		6

// The <sys/wait.h> header shall define the following symbolic constants as
// possible values for the options argument to waitid():

/// [XSI] Wait for processes that have exited.
#define WEXITED		0

/// [XSI] Keep the process whose status is returned in infop in a waitable 
/// state.
#define WNOWAIT		1

/// [XSI] Status is returned for any child that has stopped upon receipt of
///  a signal.
#define WSTOPPED	2

// The [XSI] WCONTINUED and WNOHANG constants, described above for waitpid(), 
// can also be used with waitid().

// The type idtype_t shall be defined as an enumeration type whose possible 
// values shall include at least the following: P_ALL P_PGID P_PID


// The following shall be declared as functions and may also be defined as 
// macros. Function prototypes shall be provided.

pid_t  wait(int *);

/// @todo
//int    waitid(idtype_t, id_t, siginfo_t *, int);

pid_t  waitpid(pid_t, int *, int);

#endif // _EOS_SYS_WAIT_H_
