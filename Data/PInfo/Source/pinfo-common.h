#pragma once

#include "common-chax.h"

struct SupportDataPad {
    struct SupportData data;
    u8 _pad_[2];
};

extern const struct SupportDataPad _SupportData_all_zero;
