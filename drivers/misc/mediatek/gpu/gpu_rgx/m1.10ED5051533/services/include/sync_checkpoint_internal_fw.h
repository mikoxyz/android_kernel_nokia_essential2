/*************************************************************************/ /*!
@File
@Title          Services internal synchronisation checkpoint FW obj header
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@Description    Defines the internal FW object structure for services
                synchronisation checkpoints.
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/

#ifndef _SYNC_CHECKPOINT_INTERNAL_FW_
#define _SYNC_CHECKPOINT_INTERNAL_FW_

#include "img_types.h"

/* Sync_checkpoint firmware object.
 * This is the FW-addressable structure use to hold the sync checkpoint's
 * state and other information which needs to be accessed by the firmware.
 */
typedef struct _SYNC_CHECKPOINT_FW_OBJ_
{
	IMG_UINT32	ui32State;          /*!< Holds the current state of the sync checkpoint */
	IMG_UINT32	ui32FwRefCount;     /*!< Holds the FW reference count (num of fences/updates processed) */
} _SYNC_CHECKPOINT_FW_OBJ;

/* Bit mask Firmware can use to test if a checkpoint has signalled or errored */
#define SYNC_CHECKPOINT_SIGNALLED_MASK (0x1 << 0)

/* Maximum number of sync checkpoints the firmware supports in one fence */
#define MAX_SYNC_CHECKPOINTS_PER_FENCE 20

#endif	/* _SYNC_CHECKPOINT_INTERNAL_FW_ */
