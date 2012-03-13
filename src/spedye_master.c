/*
 *  Copyright 2012 The Spedye Authors. All Rights Reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#include "spedye.h"
#include <stdlib.h>

int
spedye_master_create(spedye_master_t **m_out, spedye_conf_t *conf, uv_loop_t *loop)
{
  spedye_master_t *m;

  *m_out = NULL;

  m = malloc(sizeof(spedye_master_t));
  m->loop = loop;
  uv_ref(m->loop);

  *m_out = m;

  return 0;
}

int
spedye_master_run(spedye_master_t *m)
{
  return 0;
}

void
spedye_master_destroy(spedye_master_t *m)
{
  uv_unref(m->loop);
  free(m);
}

