#pragma once

#include <utils/octet_string.hpp>

namespace nr::ue::alg::kdf
{

// Reserved extension point for custom KDF procedures used by sidf/s3g256/s5g.
OctetString NotImplementedKdf(const OctetString &key, int fc, const OctetString *params, int count);

} // namespace nr::ue::alg::kdf
