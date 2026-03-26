#include "kdf_ext.hpp"

#include <stdexcept>

namespace nr::ue::alg::kdf
{

OctetString NotImplementedKdf(const OctetString &key, int fc, const OctetString *params, int count)
{
    (void)key;
    (void)fc;
    (void)params;
    (void)count;
    throw std::runtime_error("custom KDF extension is not implemented yet");
}

} // namespace nr::ue::alg::kdf
