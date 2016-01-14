/* 
 * Copyright (C) 2016 eos - All rights reserved.
 *
 * This file is part of eos. 
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential.
 * Written by Alexandre Arsenault <alx.arsenault@gmail.com>, 13/01/2016
 */
#include <sys/wait.h>
#include <syscall.h>

pid_t wait(int* status)
{
	return __syscall1(WAIT, (uint64_t)status);
}

pid_t waitpid(pid_t pid, int* status, int options)
{
	return __syscall3(WAITPID, (uint64_t)pid, 
		(uint64_t)status, (uint64_t)options);
}


