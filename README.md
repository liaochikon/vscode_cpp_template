# vscode_cpp_template
 vscode+vcpkg+cmake bare minimum template

vcpkg init for empty project
```bash
vcpkg new --application
```

vcpkg add packages
```bash
vcpkg add port fmt
vcpkg add port {package name}
```

install added packages to current project
```bash
vcpkg install
```

