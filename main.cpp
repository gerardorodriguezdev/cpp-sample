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

int main(const int argc, char *argv[]) {
    const auto template_file = get_template_file(argc, argv);

    return 0;
}
