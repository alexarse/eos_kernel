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

#ifndef _EOS_SYS_TYPES_H_
#define _EOS_SYS_TYPES_H_

#include <defs.h>

#define cli __asm__ __volatile__("cli");
#define sti __asm__ __volatile__("sti");

#define PAGESIZE 0x1000
#define PAGE_2ALIGN 12 // 2 ^ PAGE_2ALIGN = PAGESIZE
#define PAGE_ALIGN(ADDR) ((ADDR) >> 12 << 12)

#define READ_CR2(lcr2) __asm__ __volatile__ ("movq %%cr2, %0;" : "=r"(lcr2));
#define LOAD_CR3(lcr3) __asm__ __volatile__ ("movq %0, %%cr3;" :: "r"(lcr3));
#define READ_CR3(lcr3) __asm__ __volatile__ ("movq %%cr3, %0;" : "=r"(lcr3));

// The <sys/types.h> header shall define at least the following types:

/// [XSI] Used for file block counts.
/// blkcnt_t shall be signed integer types.
typedef uint64_t 	blkcnt_t;

/// [XSI] Used for block sizes. 
/// blksize_t shall be signed integer types.
typedef int64_t 	blksize_t;

//Used for system times in clock ticks or CLOCKS_PER_SEC; see <time.h>.
//clock_t

//Used for clock ID type in the clock and timer functions.
//clockid_t

/// [XSI] Used for device IDs.
/// dev_t shall be an integer type.
typedef int64_t 	dev_t;

/// [XSI] Used for file system block counts.
/// fsblkcnt_t shall be defined as unsigned integer types.
typedef uint64_t 	fsblkcnt_t;

/// [XSI] Used for file system file counts.
/// fsfilcnt_t shall be defined as unsigned integer types.
typedef uint64_t 	fsfilcnt_t;

/// [XSI] Used for group IDs.
/// gid_t shall be integer types. 
typedef int64_t 	gid_t;

/// [XSI] Used as a general identifier; can be used to contain at least a 
/// pid_t, uid_t, or gid_t.
/// id_t shall be integer types.
typedef int64_t 	id_t;

/// [XSI] Used for file serial numbers.
/// ino_t shall be defined as unsigned integer types.
typedef uint64_t 	ino_t;

//[XSI] [Option Start] Used for XSI interprocess communication. [Option End]
//key_t

/// [XSI] Used for some file attributes.
/// mode_t shall be an integer type.
typedef int64_t 	mode_t;

/// [XSI] Used for link counts.
/// nlink_t shall be integer types. 
typedef uint64_t 	nlink_t;

/// [XSI] Used for file sizes.
typedef uint64_t 	off_t;

/// [XSI] Used for process IDs and process group IDs.
/// pid_t shall be signed integer types.
typedef int8_t 		pid_t;

//Used to identify a thread attribute object.
//pthread_attr_t

//Used to identify a barrier.
//pthread_barrier_t

//Used to define a barrier attributes object.
//pthread_barrierattr_t

//Used for condition variables.
//pthread_cond_t
//pthread_condattr_t
//Used to identify a condition attribute object.
//pthread_key_t
//Used for thread-specific data keys.
//pthread_mutex_t
//Used for mutexes.
//pthread_mutexattr_t
//Used to identify a mutex attribute object.
//pthread_once_t
//Used for dynamic package initialization.
//pthread_rwlock_t
//Used for read-write locks.
//pthread_rwlockattr_t
//Used for read-write lock attributes.
//pthread_spinlock_t
//Used to identify a spin lock.
// [XSI] Used to identify a thread.
//pthread_t

/// [XSI] Used for sizes of objects.
/// size_t shall be an unsigned integer type.
typedef uint64_t	size_t;

/// [XSI] Used for a count of bytes or an error indication.
/// ssize_t shall be signed integer types.
typedef int64_t		ssize_t;

/// [XSI] Used for time in microseconds.
/// The type suseconds_t shall be a signed integer type capable of storing
/// values at least in the range [-1, 1000000].
typedef int64_t		suseconds_t;

/// [XSI] Used for time in seconds.
/// time_t shall be an integer type.
typedef int64_t		time_t;

//timer_t
//Used for timer ID returned by timer_create().
//trace_attr_t
//[OB TRC] [Option Start] Used to identify a trace stream attributes object [Option End]
//trace_event_id_t
//[OB TRC] [Option Start] Used to identify a trace event type. [Option End]
//trace_event_set_t
//[OB TEF] [Option Start] Used to identify a trace event type set. [Option End]
//trace_id_t
//[OB TRC] [Option Start] Used to identify a trace stream. [Option End]
//uid_t
//Used for user IDs.
//All of the types shall be defined as arithmetic types of an appropriate length, with the following exceptions:


//pthread_attr_t
//pthread_barrier_t
//pthread_barrierattr_t
//pthread_cond_t
//pthread_condattr_t
//pthread_key_t
//pthread_mutex_t
//pthread_mutexattr_t
//pthread_once_t
//pthread_rwlock_t
//pthread_rwlockattr_t
//pthread_spinlock_t
//pthread_t
//[OB TRC] [Option Start]
//trace_attr_t
//trace_event_id_t
//[Option End]
//[OB TEF] [Option Start]
//trace_event_set_t
//[Option End]
//[OB TRC] [Option Start]
//trace_id_t
//[Option End]
//Additionally:


//nlink_t, uid_t, gid_t, and id_t shall be integer types.

//blkcnt_t and off_t shall be signed integer types.

//fsblkcnt_t, fsfilcnt_t, and ino_t shall be defined as unsigned integer types.

//size_t shall be an unsigned integer type.

//blksize_t, pid_t, and ssize_t shall be signed integer types.

//clock_t shall be an integer or real-floating type. [CX] [Option Start] time_t shall be an integer type. [Option End]

//The type ssize_t shall be capable of storing values at least in the range [-1, {SSIZE_MAX}].


// The implementation shall support one or more programming environments in
// which the widths of blksize_t, pid_t, size_t, ssize_t, and suseconds_t are
// no greater than the width of type long. The names of these programming
// environments can be obtained using the confstr() function or the getconf
// utility.

//There are no defined comparison or assignment operators for the following types:


//pthread_attr_t
//pthread_barrier_t
//pthread_barrierattr_t
//pthread_cond_t
//pthread_condattr_t
//pthread_mutex_t
//pthread_mutexattr_t
//pthread_rwlock_t
 //pthread_rwlockattr_t
 //pthread_spinlock_t
//[OB TRC] [Option Start]
//trace_attr_t

#endif // _EOS_SYS_TYPES_H_
