#pragma once

#include "OloEngine/Core/Buffer.h"

#include <filesystem>

namespace OloEngine {

	class FileSystem
	{
	public:
		static Buffer ReadFileBinary(const std::filesystem::path& filepath);
	};

}
