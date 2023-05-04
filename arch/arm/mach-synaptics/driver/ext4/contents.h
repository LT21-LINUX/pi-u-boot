/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _DIRECTORY_H_
#define _DIRECTORY_H_

struct dentry {
	char *path;
	char *full_path;
	const char *filename;
	char *link;
	unsigned long size;
	u8 file_type;
	u16 mode;
	u16 uid;
	u16 gid;
	u32 *inode;
	u32 mtime;
	char *secon;
	uint64_t capabilities;
};

u32 make_directory(u32 dir_inode_num, u32 entries, struct dentry *dentries,
	u32 dirs);
int inode_set_permissions(u32 inode_num, u16 mode, u16 uid, u16 gid, u32 mtime);
struct block_allocation* get_saved_allocation_chain(void);

#endif
