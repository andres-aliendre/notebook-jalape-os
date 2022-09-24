# Environment Configuration
Add the following to your `.bashrc` or `.zshrc` file
```sh
export NOTEBOOK_HOME=<absolute_path_to_this_repo>/config
source $NOTEBOOK_HOME/main.sh
```
## Available commands

### Create C++ files
```
create_cpp_files <file_name>
```

### Create Java files
```
create_java_files <file_name>
```

### Compile C++ with local config
```
co <file_name>
```

### Run C++
```
run <file_name>
```