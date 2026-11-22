/* NON_MATCHING: 237 lines. aocItemAttributeLabel is called as its IDENTICAL definition takes it (a `char *`): retail copies
 * each label from one temporary, as for a by-value result (234 lines written so). The query's destructor is missing: retail passes the query to an empty
 * function armlink removed (`mov r0, r6; nop` before both late returns), which the image no longer names. Retail
 * also keeps the by-value results in two slots above the sort strings (frame 0x554, built 0x544), copies the first
 * two labels through VFP registers and keeps &app->contentRequest in r7 across the query loop. */
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
nn::Result FUN_00474d0c(AocCatalogJob *job);
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
    aocItemAttributeLabel(app->attributeNames[0].text, 0, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    aocItemAttributeLabel(app->attributeNames[1].text, 2, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    aocItemAttributeLabel(app->attributeNames[2].text, 3, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    aocItemAttributeLabel(app->attributeNames[3].text, 5, halfPair48LowByteA(app->contentFile), halfPair48LowByteB(app->contentFile));
    stringFormatUnbounded(app->attributeNames[4].text, "%s", "SET_SALE_INDEX");
    stringFormatUnbounded(app->attributeNames[5].text, "%s", "SET_SALE_NEW");
    stringFormatUnbounded(app->attributeNames[6].text, "%s", "SET_SALE_PRICE");
    stringFormatUnbounded(app->attributeNames[7].text, "%s", "SET_SALE_ECARD");
    stringFormatUnbounded(app->attributeNames[8].text, "%s", "SET_SALE_CHANGE");
    query.attributes = app->attributeNames;
    query.attributeCount = 9;
    if (app->catalogFilterCount != 0) {
        query.filter = app->catalogFilter;
        query.filterCount = app->catalogFilterCount;
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
    nn::Result entries = FUN_00474d0c(job);
    recordClearWideHandle(app->contentFile);
    if (nnResultIsSuccess(entries)) {
        jobSetResult(job, FUN_00473980(app));
    }
}

} /* extern "C" */
