#pragma once
#include "common.h"
#include "AsdSDK/Source/Net/Cec/AsdCec.h"

/* CEC (StreetPass) service control. */
extern "C" {

/* Closes the message box (tail call into the function that follows it). */
void asdCecMessageBoxClose(AsdCecMessageBox *box);

} /* extern "C" */
