#include "auth_s3g256.hpp"

#include <stdexcept>

namespace nr::ue::alg::s3g256
{

void NotImplemented(const Config &cfg, const OctetString &rand, const OctetString &amf)
{
    (void)cfg;
    (void)rand;
    (void)amf;
    throw std::runtime_error("s3g256 authentication is not implemented yet");
}

} // namespace nr::ue::alg::s3g256
