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
#ifndef __DROPLET_REST_H__
#define __DROPLET_REST_H__ 1

dpl_status_t dpl_list_all_my_buckets(dpl_ctx_t *ctx, dpl_vec_t **vecp);
dpl_status_t dpl_list_bucket(dpl_ctx_t *ctx, const const char *bucket, const char *prefix, const char *delimiter, dpl_vec_t **objectsp, dpl_vec_t **common_prefixesp);
dpl_status_t dpl_make_bucket(dpl_ctx_t *ctx, const char *bucket, dpl_location_constraint_t location_constraint, dpl_canned_acl_t canned_acl);
dpl_status_t dpl_deletebucket(dpl_ctx_t *ctx, const char *bucket);
dpl_status_t dpl_post(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_ftype_t object_type, dpl_dict_t *metadata, dpl_sysmd_t *sysmd, char *data_buf, unsigned int data_len, dpl_dict_t *query_params, char **resource_idp);
dpl_status_t dpl_post_buffered(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_ftype_t object_type, dpl_dict_t *metadata, dpl_sysmd_t *sysmd, unsigned int data_len, dpl_dict_t *query_params, dpl_conn_t **connp);
dpl_status_t dpl_put(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_ftype_t object_type, dpl_dict_t *metadata, dpl_sysmd_t *sysmd, char *data_buf, unsigned int data_len);
dpl_status_t dpl_put_buffered(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_ftype_t object_type, dpl_dict_t *metadata, dpl_sysmd_t *sysmd, unsigned int data_len, dpl_conn_t **connp);
dpl_status_t dpl_get(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_ftype_t object_type, dpl_condition_t *condition, char **data_bufp, unsigned int *data_lenp, dpl_dict_t **metadatap);
dpl_status_t dpl_get_range(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_ftype_t object_type, dpl_condition_t *condition, int start, int end, char **data_bufp, unsigned int *data_lenp, dpl_dict_t **metadatap);
dpl_status_t dpl_get_buffered(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_ftype_t object_type, dpl_condition_t *condition, dpl_header_func_t header_func, dpl_buffer_func_t buffer_func, void *cb_arg);
dpl_status_t dpl_head(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_condition_t *condition, dpl_dict_t **metadatap);
dpl_status_t dpl_head_all(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_condition_t *condition, dpl_dict_t **metadatap);
dpl_status_t dpl_head_sysmd(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, dpl_condition_t *condition, dpl_sysmd_t *sysmdp, dpl_dict_t **metadatap);
dpl_status_t dpl_get_metadata_from_headers(dpl_ctx_t *ctx, const dpl_dict_t *headers, dpl_dict_t *metadata);
dpl_status_t dpl_delete(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource);
dpl_status_t dpl_genurl(dpl_ctx_t *ctx, const char *bucket, const char *resource, const char *subresource, time_t expires, char *buf, unsigned int len, unsigned int *lenp);
dpl_status_t dpl_copy(dpl_ctx_t *ctx, const char *src_bucket, const char *src_resource, const char *src_subresource, const char *dst_bucket, const char *dst_resource, const char *dst_subresource, dpl_ftype_t object_type, dpl_metadata_directive_t metadata_directive, dpl_dict_t *metadata, dpl_sysmd_t *sysmd, dpl_condition_t *condition);
#endif
