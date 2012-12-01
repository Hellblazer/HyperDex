/* Copyright (c) 2012, Cornell University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of HyperDex nor the names of its contributors may be
 *       used to endorse or promote products derived from this software without
 *       specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef hyperclient_ruby_type_conversion_h_
#define hyperclient_ruby_type_conversion_h_

/* Ruby */
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
#include <ruby.h>
#ifdef __cplusplus
}
#endif /* __cplusplus */

/* HyperClient */
#include "hyperclient/hyperclient.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

void
hyperclient_ruby_obj_to_backing(VALUE obj, enum hyperdatatype* datatype, VALUE* backing);

void
hyperclient_ruby_hash_to_attrs(VALUE value, VALUE* backing,
                               struct hyperclient_attribute** attrs,
                               size_t* attrs_sz);

void
hyperclient_ruby_hash_to_map_attrs(VALUE value, VALUE* backings,
                                   struct hyperclient_map_attribute** attrs,
                                   size_t* attrs_sz);

VALUE
hyperclient_ruby_attrs_to_hash(struct hyperclient_attribute* attrs, size_t attrs_sz);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif // hyperclient_ruby_type_conversion_h_
