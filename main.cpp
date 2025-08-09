#include <fstream>
#include <iostream>

std::string get_template_file(const int number_of_arguments, char *arguments[]) {
    if (number_of_arguments < 2) {
        throw std::runtime_error("Not enough arguments");
    }

    const std::string target = arguments[1];
    if (target.length() < 3) {
        throw std::runtime_error("Invalid target template");
    }

    for (int i = 0; i < 2; i++) {
        if (target[i] != '-') throw std::runtime_error("Invalid target template");
    }

    return target.substr(2);
}

void generate_template(const std::string template_file) {
    std::ifstream file(template_file);

    if (!file.is_open()) throw std::runtime_error("Could not open file");

    int spaces = 0;
    std::string line;
    while (std::getline(file, line)) {
        if (line.length() < spaces + 1) throw std::runtime_error("Invalid template template");

        bool is_directory = line[spaces] == '/';
        if (is_directory) {
        } else {
        }
    }
    file.close();
}

int main(const int argc, char *argv[]) {
    const auto template_file = get_template_file(argc, argv);
    generate_template(template_file);
    return 0;
}
