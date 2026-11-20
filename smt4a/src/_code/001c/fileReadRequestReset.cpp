#include "AsdSDK/Source/Sys/File/AsdFileReadRequest.h"

/* Restores the default settings of a copied file request. */
extern "C" void fileReadRequestReset(AsdFileReadRequestA *record)
{
    record->state = ASD_FILE_QUEUED;
    record->lifetime = 1;
    record->lifetimeStep = 0;
    record->buffer = NULL;
    record->userBuffer = 0;
    record->unk014 = 0;
    record->size = 0;
    record->unk01C = 0;
    record->flag = 0;
    record->alignment = 0x80;
    record->heapKind = 0;
    sysMemClear(record->path, sizeof(record->path));
    record->stream = NULL;
    record->onDone = NULL;
    record->onDoneArg = NULL;
    record->onOpen = NULL;
    record->context = NULL;
    record->result = 0;
    record->unk144 = 0;
    record->unk148 = 0;
}
