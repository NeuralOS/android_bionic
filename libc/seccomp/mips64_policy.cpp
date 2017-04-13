// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_bpfs.h"
const sock_filter mips64_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5000, 0, 80),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5164, 39, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5077, 19, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5034, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5023, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5008, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5003, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5002, 73, 72), //read|write
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5004, 72, 71), //close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5020, 71, 70), //lseek|mmap|mprotect|munmap|brk|rt_sigaction|rt_sigprocmask|ioctl|pread64|pwrite64|readv|writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5031, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5028, 69, 68), //sched_yield|mremap|msync|mincore|madvise
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5032, 68, 67), //dup
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5057, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5043, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5038, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5037, 64, 63), //nanosleep|getitimer|setitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5042, 63, 62), //getpid|sendfile|socket|connect
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5056, 62, 61), //sendto|recvfrom|sendmsg|recvmsg|shutdown|bind|listen|getsockname|getpeername|socketpair|setsockopt|getsockopt|clone
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5070, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5062, 60, 59), //execve|exit|wait4|kill|uname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5076, 59, 58), //fcntl|flock|fsync|fdatasync|truncate|ftruncate
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5132, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5093, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5091, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5089, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5080, 54, 53), //getcwd|chdir|fchdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5090, 53, 52), //fchmod
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5092, 52, 51), //fchown
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5110, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5109, 50, 49), //umask|gettimeofday|getrlimit|getrusage|sysinfo|times|ptrace|getuid|syslog|getgid|setuid|setgid|geteuid|getegid|setpgid|getppid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5130, 49, 48), //setsid|setreuid|setregid|getgroups|setgroups|setresuid|getresuid|setresgid|getresgid|getpgid|setfsuid|setfsgid|getsid|capget|capset|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigsuspend|sigaltstack
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5151, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5137, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5134, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5133, 45, 44), //personality
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5136, 44, 43), //statfs|fstatfs
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5150, 43, 42), //getpriority|setpriority|sched_setparam|sched_getparam|sched_setscheduler|sched_getscheduler|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|mlock|munlock|mlockall|munlockall
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5153, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5152, 41, 40), //pivot_root
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5162, 40, 39), //prctl|adjtimex|setrlimit|chroot|sync|acct|settimeofday|mount|umount2
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5242, 19, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5205, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5178, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5172, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5168, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5167, 34, 33), //reboot|sethostname|setdomainname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5170, 33, 32), //init_module|delete_module
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5173, 32, 31), //quotactl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5194, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5193, 30, 29), //gettid|readahead|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|tkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5197, 29, 28), //futex|sched_setaffinity|sched_getaffinity
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5215, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5211, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5208, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5206, 25, 24), //exit_group
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5209, 24, 23), //epoll_ctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5214, 23, 22), //rt_sigreturn|set_tid_address|restart_syscall
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5237, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5226, 21, 20), //fadvise64|timer_create|timer_settime|timer_gettime|timer_getoverrun|timer_delete|clock_settime|clock_gettime|clock_getres|clock_nanosleep|tgkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5238, 20, 19), //waitid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5279, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5253, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5247, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5244, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5243, 15, 14), //set_thread_area
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5246, 14, 13), //inotify_add_watch|inotify_rm_watch
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5251, 13, 12), //openat|mkdirat|mknodat|fchownat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5271, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5267, 11, 10), //unlinkat|renameat|linkat|symlinkat|readlinkat|fchmodat|faccessat|pselect6|ppoll|unshare|splice|sync_file_range|tee|vmsplice
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5276, 10, 9), //getcpu|epoll_pwait|ioprio_set|ioprio_get|utimensat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5308, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5300, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5297, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5295, 6, 5), //fallocate|timerfd_create|timerfd_gettime|timerfd_settime|signalfd4|eventfd2|epoll_create1|dup3|pipe2|inotify_init1|preadv|pwritev|rt_tgsigqueueinfo|perf_event_open|accept4|recvmmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5298, 5, 4), //prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5306, 4, 3), //clock_adjtime|syncfs|sendmmsg|setns|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5312, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5309, 2, 1), //getdents64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5314, 1, 0), //seccomp|getrandom
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t mips64_filter_size = sizeof(mips64_filter) / sizeof(struct sock_filter);
