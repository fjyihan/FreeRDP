/* FreeRDP: A Remote Desktop Protocol Client
 * 16-bit to 32-bit color conversions
 * vi:ts=4 sw=4
 *
 * (c) Copyright 2014 Hewlett-Packard Development Company, L.P.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifdef __GNUC__
# pragma once
#endif

#ifndef __PRIM_16TO32BPP_H_INCLUDED__
#define __PRIM_16TO32BPP_H_INCLUDED__

#include <freerdp/primitives.h>

extern pstatus_t general_RGB565ToARGB_16u32u_C3C4(
	const UINT16* pSrc, INT32 srcStep,
	UINT32* pDst, INT32 dstStep,
	UINT32 width, UINT32 height,
	BOOL alpha, BOOL invert);
extern void primitives_init_16to32bpp_opt(primitives_t* prims);

#endif /* !__PRIM_16TO32BPP_H_INCLUDED__ */
