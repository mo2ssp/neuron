/**
 * NEURON IIoT System for Industry 4.0
 * Copyright (C) 2020-2022 EMQ Technologies Co., Ltd All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 **/

#ifndef _NEU_MANAGER_STORAGE_H_
#define _NEU_MANAGER_STORAGE_H_

#include "persist/persist.h"

#include "manager_internal.h"

void manager_strorage_plugin(neu_manager_t *manager);
void manager_storage_del_node(neu_manager_t *manager, const char *node);
void manager_storage_add_node(neu_manager_t *manager, const char *node);
void manager_storage_update_node(neu_manager_t *manager, const char *node,
                                 const char *new_name);
void manager_storage_subscribe(neu_manager_t *manager, const char *app,
                               const char *driver, const char *group,
                               const char *params);
void manager_storage_update_subscribe(neu_manager_t *manager, const char *app,
                                      const char *driver, const char *group,
                                      const char *params);
void manager_storage_unsubscribe(neu_manager_t *manager, const char *app,
                                 const char *driver, const char *group);
void manager_storage_add_ndriver_map(neu_manager_t *manager,
                                     const char *ndriver, const char *driver,
                                     const char *group);
void manager_storage_del_ndriver_map(neu_manager_t *manager,
                                     const char *ndriver, const char *driver,
                                     const char *group);

void manager_storage_inst_node(neu_manager_t *manager, const char *tmpl_name,
                               const char *node);

void manager_storage_add_template(neu_manager_t *manager,
                                  const char *   tmpl_name);
void manager_storage_del_template(neu_manager_t *manager,
                                  const char *   tmpl_name);
void manager_storage_clear_templates(neu_manager_t *manager);
void manager_storage_add_template_group(const char *tmpl, const char *group,
                                        uint32_t interval);
void manager_storage_update_template_group(const char *tmpl, const char *group,
                                           const char *new_name,
                                           uint32_t    interval);
void manager_storage_del_template_group(const char *tmpl, const char *group);
void manager_storage_add_template_tag(const char *tmpl, const char *group,
                                      const neu_datatag_t *tag);
void manager_storage_add_template_tags(const char *tmpl, const char *group,
                                       const neu_datatag_t *tags, size_t n);
void manager_storage_update_template_tag(const char *tmpl, const char *group,
                                         const neu_datatag_t *tag);
void manager_storage_update_template_tags(const char *tmpl, const char *group,
                                          const neu_datatag_t *tags, size_t n);
void manager_storage_del_template_tag(const char *tmpl, const char *group,
                                      const char *tag);
void manager_storage_del_template_tags(const char *tmpl, const char *group,
                                       const char *const *tags, size_t n);

int manager_load_plugin(neu_manager_t *manager);
int manager_load_node(neu_manager_t *manager);
int manager_load_subscribe(neu_manager_t *manager);
int manager_load_template(neu_manager_t *manager);

#endif
