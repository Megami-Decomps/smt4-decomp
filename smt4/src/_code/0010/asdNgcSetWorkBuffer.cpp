#include "sys/NgWord.h"

enum {
    NGC_RESULT_MISSING_WORK_MEMORY = 0xE0E0EBF6,
    NGC_RESULT_ALREADY_REGISTERED = 0xE0E0EBEB
};
enum {
    NGC_FIRST_REGION_SIZE = 0xB000,
    NGC_SECOND_REGION_SIZE = 0x4000,
    NGC_ARCHIVE_WORKSPACE_SIZE = 0x800
};

/* Partitions the scanner's working buffer and mounts the NG-word archive. */
extern "C" s32 asdNgcSetWorkBuffer(Obj420fa4 *scanner, u8 *buffer)
{
    if (buffer == NULL) {
        return NGC_RESULT_MISSING_WORK_MEMORY;
    }
    if (scanner->registered != 0) {
        return NGC_RESULT_ALREADY_REGISTERED;
    }
    scanner->workMemory = buffer;
    scanner->firstRegion = scanner->workMemory;
    scanner->secondRegion = scanner->firstRegion + NGC_FIRST_REGION_SIZE;
    scanner->archiveWorkspace = scanner->secondRegion + NGC_SECOND_REGION_SIZE;
    scanner->archivePath = (const char *)scanner->archiveWorkspace + NGC_ARCHIVE_WORKSPACE_SIZE;
    nn::Result result = ngwordMountArchive(scanner, scanner->archivePath);
    if (nnResultIsSuccess((s32)result)) {
        return 0;
    }
    return (s32)result;
}
