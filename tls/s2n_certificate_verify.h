/*
 * Copyright 2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
  * Specified in https://tools.ietf.org/html/rfc8446#section-4.4.3
  *
  * Servers MUST send this message when authenticating via a certificate.  
  * Clients MUST send this message whenever authenticating via a certificate. 
  * When sent, this message MUST appear immediately after the Certificate 
  * message and immediately prior to the Finished message.
 **/

#pragma once

#include <stdint.h>

/* 64 'space' characters (0x20) */
const uint8_t S2N_CERT_VERIFY_PREFIX[] = {0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
      0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
      0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
      0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20};
/* 'TLS 1.3, server CertificateVerify' with 0x00 separator */
const uint8_t S2N_SERVER_CERT_VERIFY_CONTEXT[] = {0x54, 0x4c, 0x53, 0x20, 0x31, 0x2e, 0x33,
        0x2c, 0x20, 0x73, 0x65, 0x72, 0x76, 0x65, 0x72, 0x20, 0x43, 0x65, 0x72, 0x74, 0x69,
        0x66, 0x69, 0x63, 0x61, 0x74, 0x65, 0x56, 0x65, 0x72, 0x69, 0x66, 0x79, 0x00};
/* 'TLS 1.3, client CertificateVerify' with 0x00 separator */
const uint8_t S2N_CLIENT_CERT_VERIFY_CONTEXT[] = {0x54, 0x4c, 0x53, 0x20, 0x31, 0x2e, 0x33,
        0x2c, 0x20, 0x63, 0x6c, 0x69, 0x65, 0x6e, 0x74, 0x20, 0x43, 0x65, 0x72, 0x74, 0x69,
        0x66, 0x69, 0x63, 0x61, 0x74, 0x65, 0x56, 0x65, 0x72, 0x69, 0x66, 0x79, 0x00};
