// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2019, The Gravy Train
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n                                                                         \n"
        "  .oooooo.    oooooooooo.        .o.       oooooo     oooo oooooo   oooo \n"
        " d8P'  `Y8b   `888   `Y88.      .888.       `888.     .8'   `888.   .8'  \n"
        "888            888   .d88'     .8'888.       `888.   .8'     `888. .8'   \n"
        "888    oooooo  888ooo88P'     .8' `888.       `888. .8'       `888.8'    \n"
        "888    oooooo  888`88b.      .88ooo8888.       `888.8'         `888'     \n"
        "`88.    .88'   888  `88b.   .8'     `888.       `888'           888      \n"
        " `Y8bood8P'   o888o  o888o o88o     o8888o       `8'           o888o     \n"
        "                                                                         \n";

const std::string nonWindowsAsciiArt = 
      "\n                                                                         \n"
        "  .oooooo.    oooooooooo.        .o.       oooooo     oooo oooooo   oooo \n"
        " d8P'  `Y8b   `888   `Y88.      .888.       `888.     .8'   `888.   .8'  \n"
        "888            888   .d88'     .8'888.       `888.   .8'     `888. .8'   \n"
        "888    oooooo  888ooo88P'     .8' `888.       `888. .8'       `888.8'    \n"
        "888    oooooo  888`88b.      .88ooo8888.       `888.8'         `888'     \n"
        "`88.    .88'   888  `88b.   .8'     `888.       `888'           888      \n"
        " `Y8bood8P'   o888o  o888o o88o     o8888o       `8'           o888o     \n"
        "                                                                         \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
