#include "sidf.hpp"

#include <stdexcept>

namespace nr::ue::alg::sidf
{

std::string GenerateSchemeOutput(const std::string &msin, const OctetString &hnPublicKey)
{
    (void)msin;
    (void)hnPublicKey;
    throw std::runtime_error("sidf (SUCI Profile C / Scheme 3) is not implemented yet");
}

} // namespace nr::ue::alg::sidf
