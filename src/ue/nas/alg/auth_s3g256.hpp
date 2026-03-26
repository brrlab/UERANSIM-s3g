#pragma once

#include <utils/octet_string.hpp>

namespace nr::ue::alg::s3g256
{

struct Config
{
    OctetString key{}; // 128 bytes
    OctetString top{}; // 32 bytes
    OctetString add{}; // 8 bytes
};

// Stub for S3G-256 authentication calculations.
// Implementers should derive CK/IK/RES/AK/MAC equivalents compatible with NasMm authentication flow.
void NotImplemented(const Config &cfg, const OctetString &rand, const OctetString &amf);

} // namespace nr::ue::alg::s3g256
