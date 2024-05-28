/*
 * nand_class.h for  SUNXI NAND .
 *
 * Copyright (C) 2016 Allwinner.
 *
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */
#ifndef __NAND_CLASS_H__
#define __NAND_CLASS_H__

#include <linux/kobject.h>

struct nand_kobject {

	struct kobject kobj;
	struct _nftl_blk *nftl_blk;
};

extern int debug_data;
extern int nand_debug_init(struct _nftl_blk *nftl_blk, int part_num);

extern int _dev_nand_read2(char *name, unsigned int start_sector,
			   unsigned int len, unsigned char *buf);
extern int _dev_nand_write2(char *name, unsigned int start_sector,
			    unsigned int len, unsigned char *buf);
extern int nand_get_drv_version(int *ver_main, int *ver_sub, int *date, int *time);
extern int nftl_get_gc_info(void *zone, char *buf, int size);

#endif
