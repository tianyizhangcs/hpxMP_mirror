// Copyright (c) 2018 Tianyi Zhang
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef HPXMP_GCC_HPXMP_H
#define HPXMP_GCC_HPXMP_H

#include "kmp_ftn_os.h"
extern "C" void
xexpand(KMP_API_NAME_GOMP_PARALLEL)(void (*task)(void *), void *data, unsigned num_threads, unsigned int flags);
extern "C" void 
xexpand(KMP_API_NAME_GOMP_TASK)(void (*func)(void *), void *data, void (*copy_func)(void *, void *),
                                long arg_size, long arg_align, bool if_cond, unsigned gomp_flags);
extern "C" void
xexpand(KMP_API_NAME_GOMP_TASKWAIT)(void);

extern "C" int
xexpand(KMP_API_NAME_GOMP_SINGLE_START)(void);

extern "C" void *
xexpand(KMP_API_NAME_GOMP_SINGLE_COPY_START)(void);

extern "C" void
xexpand(KMP_API_NAME_GOMP_SINGLE_COPY_END)(void *data);

extern "C" void
xexpand(KMP_API_NAME_GOMP_BARRIER)(void);

extern "C" void
xexpand(KMP_API_NAME_GOMP_CRITICAL_START)(void);

extern "C" void
xexpand(KMP_API_NAME_GOMP_CRITICAL_END)(void);

extern "C" void
xexpand(KMP_API_NAME_GOMP_CRITICAL_NAME_START)(void** ptr);

extern "C" void
xexpand(KMP_API_NAME_GOMP_CRITICAL_NAME_END)(void** ptr);

extern "C" void
xexpand(KMP_API_NAME_GOMP_ATOMIC_START)(void);

extern "C" void
xexpand(KMP_API_NAME_GOMP_ATOMIC_END)(void);

extern "C" void
xexpand(KMP_API_NAME_GOMP_ORDERED_START)(void);

extern "C" void
xexpand(KMP_API_NAME_GOMP_ORDERED_END)(void);

extern "C" void
xexpand(KMP_API_NAME_GOMP_PARALLEL_LOOP_DYNAMIC)(void (*task)(void *),
                                                 void *data, unsigned num_threads, long lb, long ub, long str, long chunk_sz,
                                                 unsigned flags);

extern "C" int
xexpand(KMP_API_NAME_GOMP_LOOP_DYNAMIC_NEXT)(long *p_lb, long *p_ub);

extern "C" void
xexpand(KMP_API_NAME_GOMP_LOOP_END_NOWAIT)(void);

extern "C" int
xexpand(KMP_API_NAME_GOMP_LOOP_ORDERED_DYNAMIC_START)(
        long lb, long ub, long str, long *p_lb, long *p_ub);

extern "C" int
xexpand(KMP_API_NAME_GOMP_LOOP_ORDERED_DYNAMIC_NEXT)(long *p_lb, long *p_ub);
#endif //HPXMP_GCC_HPXMP_H
