/**
 * flashmap.h
 *
 *  Created on: 2013-04-10
 *      Author: jeromeg
 */

#ifndef FLASHMAP_H_
#define FLASHMAP_H_

#define SEQNUM_MASK     0x7fffffff

/**
 * Flash Partition Table
 */
typedef struct {
    UCHAR *addr;
    ULONG size;
} flashPartition;

typedef struct {
    UCHAR bf_key[256];
    UCHAR sig_key[256];
    ULONG bf_key_size;
    ULONG sig_key_size;
} flashKey;

/* Flash Memory Map */
#define VTABLE_SIZE         512
#define FLASH_BOOT_BASE     0x08000000
#define FLASH_BOOT_HEADER   (0x08000000 + VTABLE_SIZE - 4)

#define FLASH_BOOT_SIZE     (20 * 1024)
#define FLASH_BANK_SIZE     (70 * 1024)

#define FLASH_BANKF_BASE    (FLASH_BOOT_BASE + FLASH_BOOT_SIZE)
#define FLASH_BANKA_BASE    (FLASH_BANKF_BASE + FLASH_BANK_SIZE)
#define FLASH_BANKB_BASE    (FLASH_BANKF_BASE + FLASH_BANK_SIZE * 2)
#define FLASH_KEY_BASE      0x0803e000
#endif /* FLASHMAP_H_ */
