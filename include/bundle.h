#pragma once

#include <glib.h>

gboolean create_bundle(const gchar *bundlename, const gchar *contentdir);
gboolean extract_bundle(const gchar *bundlename, const gchar *outputdir);

gboolean mount_bundle(const gchar *bundlename, const gchar *mountpoint);
gboolean umount_bundle(const gchar *bundlename);