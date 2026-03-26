#include "auth_s5g.hpp"

#include <stdexcept>

namespace nr::ue::alg::s5g
{

void NotImplemented(const Config &cfg, const OctetString &rand, const OctetString &amf)
{
    (void)cfg;
    (void)rand;
    (void)amf;
    throw std::runtime_error("s5g authentication is not implemented yet");
}

} // namespace nr::ue::alg::s5g
