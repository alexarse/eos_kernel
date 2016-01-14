//The <sys/types.h> header shall define at least the following types:

//typedef	__int64_t	__darwin_blkcnt_t;	/* total blocks */
//typedef	__int32_t	__darwin_blksize_t;	/* preferred block size */
//typedef __int32_t	__darwin_dev_t;		/* dev_t */
//typedef unsigned int	__darwin_fsblkcnt_t;	/* Used by statvfs and fstatvfs */
//typedef unsigned int	__darwin_fsfilcnt_t;	/* Used by statvfs and fstatvfs */
//typedef __uint32_t	__darwin_gid_t;		/* [???] process and group IDs */
//typedef __uint32_t	__darwin_id_t;		/* [XSI] pid_t, uid_t, or gid_t*/
//typedef __uint64_t	__darwin_ino64_t;	/* [???] Used for 64 bit inodes */
//#if __DARWIN_64_BIT_INO_T
//typedef __darwin_ino64_t __darwin_ino_t;	/* [???] Used for inodes */
//#else /* !__DARWIN_64_BIT_INO_T */
//typedef __uint32_t	__darwin_ino_t;		/* [???] Used for inodes */
//#endif /* __DARWIN_64_BIT_INO_T */
//typedef __darwin_natural_t __darwin_mach_port_name_t; /* Used by mach */
//typedef __darwin_mach_port_name_t __darwin_mach_port_t; /* Used by mach */
//typedef __uint16_t	__darwin_mode_t;	/* [???] Some file attributes */
//typedef __int64_t	__darwin_off_t;		/* [???] Used for file sizes */
//typedef __int32_t	__darwin_pid_t;		/* [???] process and group IDs */
//typedef __uint32_t	__darwin_sigset_t;	/* [???] signal set */
//typedef __int32_t	__darwin_suseconds_t;	/* [???] microseconds */
//typedef __uint32_t	__darwin_uid_t;		/* [???] user IDs */
//typedef __uint32_t	__darwin_useconds_t;	/* [???] microseconds */
//typedef	unsigned char	__darwin_uuid_t[16];
//typedef	char	__darwin_uuid_string_t[37];

//blkcnt_t
//Used for file block counts.
//blksize_t
//Used for block sizes.
//clock_t
//Used for system times in clock ticks or CLOCKS_PER_SEC; see <time.h>.
//clockid_t
//Used for clock ID type in the clock and timer functions.
//dev_t
//Used for device IDs.
//fsblkcnt_t
//Used for file system block counts.
//fsfilcnt_t
//Used for file system file counts.
//gid_t
//Used for group IDs.
//id_t
//Used as a general identifier; can be used to contain at least a pid_t, uid_t, or gid_t.
//ino_t
//Used for file serial numbers.
//key_t
//[XSI] [Option Start] Used for XSI interprocess communication. [Option End]
//mode_t
//Used for some file attributes.
//nlink_t
//Used for link counts.
//off_t
//Used for file sizes.
//pid_t
//Used for process IDs and process group IDs.
//pthread_attr_t
//Used to identify a thread attribute object.
//pthread_barrier_t
//Used to identify a barrier.
//pthread_barrierattr_t
//Used to define a barrier attributes object.
//pthread_cond_t
//Used for condition variables.
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
//pthread_t
//Used to identify a thread.
//size_t
//Used for sizes of objects.
//ssize_t
//Used for a count of bytes or an error indication.
//suseconds_t
//[XSI] [Option Start] Used for time in microseconds. [Option End]
//time_t
//Used for time in seconds.
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

//mode_t shall be an integer type.

//dev_t shall be an integer type.

//nlink_t, uid_t, gid_t, and id_t shall be integer types.

//blkcnt_t and off_t shall be signed integer types.

//fsblkcnt_t, fsfilcnt_t, and ino_t shall be defined as unsigned integer types.

//size_t shall be an unsigned integer type.

//blksize_t, pid_t, and ssize_t shall be signed integer types.

//clock_t shall be an integer or real-floating type. [CX] [Option Start] time_t shall be an integer type. [Option End]

//The type ssize_t shall be capable of storing values at least in the range [-1, {SSIZE_MAX}].

//[XSI] [Option Start] The type suseconds_t shall be a signed integer type capable of storing values at least in the range [-1, 1000000]. [Option End]

//The implementation shall support one or more programming environments in which the widths of blksize_t, pid_t, size_t, ssize_t, and suseconds_t are no greater than the width of type long. The names of these programming environments can be obtained using the confstr() function or the getconf utility.

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
