/* 
 * Copyright (C) 2016 EOS - All rights reserved.
 *
 * This file is part of EOS. 
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * Proprietary and confidential.
 * Written by Alexandre Arsenault <alx.arsenault@gmail.com>, 13/01/2016
 * 
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _EOS_SYS_TIME_H_
#define	_EOS_SYS_TIME_H_

// The <sys/time.h> header shall define the time_t and suseconds_t types as
// described in <sys/types.h>.
#include <sys/types.h>

// The <sys/time.h> header shall define the timeval structure, 
// which shall include at least the following members:

typedef struct timeval {
	time_t tv_sec;		// Seconds. 
	suseconds_t tv_usec // Microseconds. 
};

// The <sys/time.h> header shall define the itimerval structure, which shall
// include at least the following members:

struct timeval it_interval; // Timer interval. 
struct timeval it_value;	// Current value. 

/// @todo The <sys/time.h> header shall define the fd_set type as described in <sys/select.h>.

// The <sys/time.h> header shall define the following symbolic constants for
// the which argument of getitimer() and setitimer():

// Decrements in real time.
#define ITIMER_REAL		(0)

// Decrements in process virtual time.
#define ITIMER_VIRTUAL	(1)

// Decrements both in process virtual time and when the system is running on
// behalf of the process.
#define ITIMER_PROF		(2)

/// @todo  The <sys/time.h> header shall define the following as described in
// <sys/select.h>: FD_CLR() FD_ISSET() FD_SET() FD_ZERO() FD_SETSIZE

// The following shall be declared as functions and may also be defined as
// macros. Function prototypes shall be provided.

/// @todo Not implemented yet..
int getitimer(int, struct itimerval *);

/// @todo Not implemented yet.
int gettimeofday(struct timeval *restrict, void *restrict);

/// @todo Not implemented yet.
int setitimer(int, const struct itimerval *restrict,
	struct itimerval *restrict);

/// @todo Not implemented yet.
int select(int, fd_set *restrict, fd_set *restrict, fd_set *restrict,
	struct timeval *restrict);

/// @todo Not implemented yet.
int utimes(const char *, const struct timeval [2]);
