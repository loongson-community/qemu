/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * LoongArch CPU parameters for QEMU.
 *
 * Copyright (c) 2021 Loongson Technology Corporation Limited
 */

#ifndef LOONGARCH_CPU_PARAM_H
#define LOONGARCH_CPU_PARAM_H

#define TARGET_PHYS_ADDR_SPACE_BITS 48

#if defined(CONFIG_USER_ONLY) && defined(TARGET_ABI32)
#define TARGET_VIRT_ADDR_SPACE_BITS 32
#else
#define TARGET_VIRT_ADDR_SPACE_BITS 48
#endif

#ifdef CONFIG_USER_ONLY
/* Allow user-only to vary page size from 4k */
# define TARGET_PAGE_BITS_VARY
# define TARGET_PAGE_BITS_MIN 12
#else
# define TARGET_PAGE_BITS 12
#endif

#define TCG_GUEST_DEFAULT_MO (0)

#endif
