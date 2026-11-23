/* Built with -O3 -Ospace, as its Apocalypse twin FUN_00500924 and their look-alike fsGetUserMountHandle: retail
 * predicates the report call (ldreq; moveq r1, pc; bleq). */
#include "nn/fs/ArchiveFile.h"
#include "nn/Result.h"
#include "sys/PlatformFault.h"

/* Report an unopened file before returning the IPC handle it holds. */
extern "C" u32 fsArchiveFileRequireHandle(FsArchiveFile *file)
{
    if (file->handle == 0) {
        nn::Result unopenedFile(0xE0A046DA);
        sysReportCheckFailure(unopenedFile, __current_pc());
    }
    return file->handle;
}
