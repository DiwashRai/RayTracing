
#include "color.h"
#include "vec3.h"

#include <iostream>

int main()
{
    // Image

    const int image_width = 1024;
    const int image_height = 512;

    // Render
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n225\n";

    for (int j = 0; j < image_height; ++j)
    {
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i)
        {
            auto pixel_color = color(static_cast<double>(i)/(image_width - 1),
                                     static_cast<double>(j)/(image_height - 1),
                                     0.0);
            write_color(std::cout, pixel_color);
        }
    }
    std::clog << "\rDone.                    \n";

    return 0;
}
