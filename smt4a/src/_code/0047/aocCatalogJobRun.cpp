/* NON_MATCHING: 199 lines (shape 139). Retail also gives the by-value results one slot each above the sort
 * strings (frame 0x554) where this build overlays them on the outgoing argument at the bottom of the frame (0x544),
 * and keeps &now in r9. */
#include <stdio.h>
#include "addon/AocBufferRequest.h"
#include "addon/AocCatalogQuery.h"
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"
#include "nn/Result.h"
#include "shard/W6_W6Match8_DateTimeValue.h"

extern "C" {

s32 legacyResourceIdRemap(const WindowStatusResult *result); // declcheck: local (the shared declarations take a packed id or a bare pointer and return u32)
WindowStatusResult aocOpenPackedArchive(void *file, const void *archive);
void recordClearWideHandle(void *file);
u16 halfPair48LowByteA(void *file);
u16 halfPair48LowByteB(void *file);
AocCatalogQuery *aocCatalogQueryInit(AocCatalogQuery *query, void *buffer, u32 bytes);
WindowStatusResult aocServiceQueryCatalog(AocBufferRequest *request, u32 offset, u32 count, AocCatalogQuery *query);
WindowStatusResult FUN_00427ff4(void *owner, DateTimeValue *output);
s32 stringFormatUnbounded(char *buffer, const char *format, ...);
void aocApplicationRecreatePrimaryRequest(AocMain *app);
WindowStatusResult FUN_00473980(AocMain *main);
nn::Result aocCatalogBuildContentRecords(AocCatalogJob *job);
u32 FUN_00500234(AocBufferRequest *request);
u32 FUN_00500244(AocBufferRequest *request);
s32 nn_fnd_DateTime_GetDay(const DateTimeValue *dateTime); // declcheck: local (protos__code.h's generated prototype takes an undefined4, not the date)
s32 nn_fnd_DateTime_GetMonth(const DateTimeValue *dateTime); // declcheck: local (protos__code.h's generated prototype takes an undefined4, not the date)
s32 nn_fnd_DateTime_GetYear(const DateTimeValue *dateTime); // declcheck: local (protos__code.h's generated prototype takes an undefined4, not the date)
s32 nn_fnd_DateTime_DateToDays(s32 year, s32 month, s32 day);

enum {
    CATALOG_PAGE = 64  /* entries one catalog query returns */
};

/* Leaves `result` in the job; true when it is a failure. */
static __inline bool jobSetResult(AocCatalogJob *job, WindowStatusResult result)
{
    job->result = result;
    return nnResultIsFailure(legacyResourceIdRemap(&job->result));
}

/* Runs the shop's catalog job: opens the content file, asks the service for the sale catalog sorted by
 * SET_SALE_INDEX (a page of CATALOG_PAGE entries, again from the last page when the offset is past the end), reads
 * the service's date into the job and hands over to the entry pass. Every step leaves its result in the job. */
void aocCatalogJobRun(AocCatalogJob *job)
{
    AocMain *app = g_aocMain;
    char buffer[0x400];
    AocCatalogSort sort;

    if (jobSetResult(job, aocOpenPackedArchive(app->contentFile, app->contentArchive))) {
        return;
    }
    AocCatalogQuery query;
    aocCatalogQueryInit(&query, buffer, sizeof(buffer));
    query.sorted = 1;
    app->attributeNames[0] = aocItemAttributeLabel(0, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    app->attributeNames[1] = aocItemAttributeLabel(2, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    app->attributeNames[2] = aocItemAttributeLabel(3, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    app->attributeNames[3] = aocItemAttributeLabel(5, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    stringFormatUnbounded(app->attributeNames[4].text, "%s", "SET_SALE_INDEX");
    stringFormatUnbounded(app->attributeNames[5].text, "%s", "SET_SALE_NEW");
    stringFormatUnbounded(app->attributeNames[6].text, "%s", "SET_SALE_PRICE");
    stringFormatUnbounded(app->attributeNames[7].text, "%s", "SET_SALE_ECARD");
    stringFormatUnbounded(app->attributeNames[8].text, "%s", "SET_SALE_CHANGE");
    query.attributes = app->attributeNames;
    query.attributeCount = 9;
    if (app->catalogFilterCount != 0) {
        query.filterCount = app->catalogFilterCount;
        query.filter = app->catalogFilter;
    }
    aocApplicationRecreatePrimaryRequest(app);
    sprintf(sort.order, "ascending");
    sprintf(sort.attribute, "SET_SALE_INDEX");
    sprintf(sort.type, "integer");
    query.sort = &sort;
    for (;;) {
        if (jobSetResult(job, aocServiceQueryCatalog(app->contentRequest, app->catalogOffset, CATALOG_PAGE, &query))) {
            recordClearWideHandle(app->contentFile);
            return;
        }
        if (FUN_00500244(app->contentRequest) > app->catalogOffset || FUN_00500244(app->contentRequest) == 0) {
            break;
        }
        /* past the end: ask again from the last page */
        app->catalogOffset = ((FUN_00500244(app->contentRequest) + CATALOG_PAGE - 1) / CATALOG_PAGE - 1) * CATALOG_PAGE;
    }
    app->recordCount = FUN_00500234(app->contentRequest);
    app->catalogTotal = FUN_00500244(app->contentRequest);
    app->catalogTotal = FUN_00500244(app->contentRequest);  /* retail reads and stores it twice */

    DateTimeValue now;
    now.milliseconds = 0;
    if (jobSetResult(job, FUN_00427ff4(app->serviceClock, &now))) {
        recordClearWideHandle(app->contentFile);
        return;
    }
    job->today = nn_fnd_DateTime_DateToDays(nn_fnd_DateTime_GetYear(&now), nn_fnd_DateTime_GetMonth(&now),
                                            nn_fnd_DateTime_GetDay(&now));
    nn::Result entries = aocCatalogBuildContentRecords(job);
    recordClearWideHandle(app->contentFile);
    if (nnResultIsSuccess(entries)) {
        jobSetResult(job, FUN_00473980(app));
    }
}

} /* extern "C" */
