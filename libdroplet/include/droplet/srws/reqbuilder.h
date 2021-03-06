/*
 * Copyright (C) 2010 SCALITY SA. All rights reserved.
 * http://www.scality.com
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY SCALITY SA ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL SCALITY SA OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation
 * are those of the authors and should not be interpreted as representing
 * official policies, either expressed or implied, of SCALITY SA.
 *
 * https://github.com/scality/Droplet
 */
#ifndef __DROPLET_SRWS_REQBUILDER_H__
#define __DROPLET_SRWS_REQBUILDER_H__ 1

#define SRWS_CLASS_NBITS            4
#define SRWS_REPLICA_NBITS          4
#define SRWS_EXTRA_NBITS            (SRWS_CLASS_NBITS+SRWS_REPLICA_NBITS)

#define SRWS_SPECIFIC_NBITS       24
#define SRWS_SERVICEID_NBITS      8
#define SRWS_VOLID_NBITS          32
#define SRWS_OID_NBITS            64
#define SRWS_HASH_NBITS           24 /*!< dispersion */

#define SRWS_PAYLOAD_NBITS        (SRWS_SPECIFIC_NBITS+SRWS_SERVICEID_NBITS+SRWS_VOLID_NBITS+SRWS_OID_NBITS)

/*
 * Service IDs
 */
#define SRWS_SERVICE_ID_TEST     0x00

/* PROTO reqbuilder.c */
/* src/reqbuilder.c */
dpl_status_t dpl_srws_req_build(const dpl_req_t *req, dpl_dict_t **headersp);
#endif
