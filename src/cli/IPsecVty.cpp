/*
 * (c) Copyright 2016 Hewlett Packard Enterprise Development LP
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

/**********************************
* System Includes
**********************************/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

/**********************************
* Local Includes
***********************************/
#include "IPsecVty.h"

IPsecVty::IPsecVty()
{

}

IPsecVty::~IPsecVty()
{

}

ipsec_ret IPsecVty::vty_policy_id_set(const string pol_id)
{
    return ipsec_ret::OK;
}

ipsec_ret IPsecVty::vty_policy_id_get(string& pol_id)
{
    return ipsec_ret::OK;
}

ipsec_ret IPsecVty::vty_policy_desc_set(const string pol_desc)
{
    return ipsec_ret::OK;
}

ipsec_ret IPsecVty::vty_policy_mode_set(const ipsec_mode pol_mode)
{
    return ipsec_ret::OK;
}

ipsec_ret IPsecVty::vty_policy_esp_hash_set(const ipsec_integrity hash)
{
    return ipsec_ret::OK;
}

ipsec_ret IPsecVty::vty_policy_esp_encrypt_set(const ipsec_cipher encryption)
{
    return ipsec_ret::OK;
}

ipsec_ret IPsecVty::vty_policy_enable()
{
    return ipsec_ret::OK;
}

ipsec_ret IPsecVty::vty_policy_disable()
{
    return ipsec_ret::OK;
}
