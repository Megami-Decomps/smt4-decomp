/* Building a wave archive whose waves are separate files (the sound archive loaders FUN_00150d2c and soundArchiveLoaderConvertWaveArchiveToIndividual):
 * the header part is copied or read, and a FILE block holding one pointer per wave follows it. */
#ifndef SOUND_WAVEARCHIVECONVERT_H
#define SOUND_WAVEARCHIVECONVERT_H

#include "common.h"
#include <string.h>

/* The FILE block's four-byte signature, shared by both loaders. */
extern "C" const char g_waveArchiveFileBlockSignature[4];

/* Writes the FILE block's signature at `blockOffset` of the archive being built. A plain static that armcc inlines
 * late: both loaders form the destination, set up the next call's argument and only then load the signature, which
 * the same copy written in place does not give (soundArchiveLoaderConvertWaveArchiveToIndividual 6 lines off, FUN_00150d2c 7 more). */
static void waveArchiveWriteFileSignature(u8 *file, u32 blockOffset)
{
    memcpy(file + blockOffset, g_waveArchiveFileBlockSignature, 4);
}

#endif
