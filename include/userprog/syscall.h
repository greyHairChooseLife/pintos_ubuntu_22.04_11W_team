#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include "threads/synch.h"

void syscall_init(void);
void exit(int status);

extern struct lock filesys_lock; /* 파일 시스템 전역 락 */

#endif /* userprog/syscall.h */
