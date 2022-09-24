#!/bin/bash

create_java_files() {

    source_file="$NOTEBOOK_HOME/templates/Main.java"
    dest_file="./Main.java"
    cp "$source_file" "$dest_file"

    base_files=("input.txt" "output.txt" "error.txt")
    for file in ${base_files[@]}; do
        touch "./$file"
    done
}

create_cpp_files() {

    [[ -n "${1%.*}" ]] && file_name="${1%.*}" || file_name="main"

    source_file="$NOTEBOOK_HOME/templates/main.cpp"
    dest_file="./$file_name.cpp"
    cp "$source_file" "$dest_file"

    base_ext=("in" "out" "err")
    for extn in ${base_ext[@]}; do
        touch "./$file_name.$extn"
    done
}
