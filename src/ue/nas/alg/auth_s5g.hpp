#pragma once

#include <utils/octet_string.hpp>

namespace nr::ue::alg::s5g
{

struct Config
{
    OctetString key{}; // 256 bytes
    OctetString top{}; // 32 bytes
    OctetString add{}; // 8 bytes
};

// Stub for S5G authentication calculations.
// Implementers should derive CK/IK/RES/AK/MAC equivalents compatible with NasMm authentication flow.
void NotImplemented(const Config &cfg, const OctetString &rand, const OctetString &amf);

} // namespace nr::ue::alg::s5g
