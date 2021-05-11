#include <sys/ioctl.h>
#include <string>
#include <vector>
#include <map>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <unistd.h>
#include <thread>
#include <tuple>
#include <cctype>

#include <typeinfo>

#include "Constant.hpp"

std::pair<int, std::string> ERR_ARGS = {11, "Arguments inconnus : "};
std::pair<int, std::string> ERR_NONE = {0, ""};
std::pair<int, std::string> ERR_DISK = {10, "Vous n'avez pas assez d'espace disque"};
std::pair<int, std::string> ERR_DEFAULT = {255, "Erreur inconnue"};
std::pair<int, std::string> ERR_CONNECTION = {12, "Unable to download extentions. Check your connection"};

std::pair<int, std::string> ERR_NO_EXTENTION = {13, "Please specifies one or more extentions to "};


//string COLOR_ERR = "\e[38;5;124m";
std::string COLOR_ERR = "\e[38;5;1m";
std::string COLOR_DEFAULT = "\e[39m";
std::string COLOR_BLUE = "\e[38;5;4m";
std::string COLOR_GREEN = "\e[38;5;2m";


std::string SERVER_URL = "http://squitch.fr/assets/tess/marketplace/";

std::vector<std::string> LOADERS = {
        "/",
        "-",
        "\\",
        "|"
};

std::vector<std::string> STATUS = {
        "DOWNLOADING",
        "INSTALLING",
        "FINISHED",
        "WAITING"
};



std::string STATUS_DOWNLOADING = "DOWNLOADING";
std::string STATUS_INSTALLING = "INSTALLING";
std::string STATUS_FINISHED = "FINISHED";
std::string STATUS_WAITING = "WAITING";
std::string STATUS_TEST = "AA";
std::string STATUS_INSTALLING_WAITING_NEXT = "waiting_next_install";
std::string STATUS_UNINSTALL = "uninstall";



std::vector<std::pair<std::string, std::string>> ARGS_ALLIAS = {
        std::make_pair("-S", "--save"),
        std::make_pair("-R", "--remove"),
        std::make_pair("-T", "--theme"),
        std::make_pair("-P", "--plugin"),
        std::make_pair("-H", "--help"),
        std::make_pair("-U", "--upgrade")
};