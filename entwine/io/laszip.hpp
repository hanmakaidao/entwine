/******************************************************************************
* Copyright (c) 2020, Connor Manning (connor@hobu.co)
*
* Entwine -- Point cloud indexing
*
* Entwine is available under the terms of the LGPL2 license. See COPYING
* for specific license text and more information.
*
******************************************************************************/

#pragma once

#include <string>
#include <vector>

#include <entwine/types/bounds.hpp>
#include <entwine/types/endpoints.hpp>
#include <entwine/types/vector-point-table.hpp>

namespace entwine
{

struct Metadata;

namespace io
{
namespace laszip
{

void write(
    const Metadata& Metadata,
    const Endpoints& endpoints,
    std::string filename,
    BlockPointTable& table,
    const Bounds bounds);

void read(
    const Metadata& Metadata,
    const Endpoints& endpoints,
    std::string filename,
    VectorPointTable& table);

} // namespace laszip
} // namespace io
} // namespace entwine
