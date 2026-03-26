#pragma once

#include <utils/octet_string.hpp>
#include <string>

namespace nr::ue::alg::sidf
{

// Stub for SUCI Protection Scheme 3 / Profile C ("sidf").
// Expected output format: hex string of the final SUCI scheme-output field.
std::string GenerateSchemeOutput(const std::string &msin, const OctetString &hnPublicKey);

} // namespace nr::ue::alg::sidf
