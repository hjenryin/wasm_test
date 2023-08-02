# wasm_test

## build

### wasm

```
mkdir build_js
cd build_js
emcmake cmake ..
emmake make
```

### linux

```
mkdir build_linux
cd build_linux
cmake ..
make
```

## Results

### linux

```
File at ../data.json
Number of lines in file: 116362
```

### html on linux

On linux, I used the _Live Server_ extension to open the html file. The result was

```
File at data.json
Number of lines in file: 116362
```

### html on windows

On windows, I used the _Live Server_ extension to open the html file previously compiled on linux. The result was

```
File at data.json
Number of lines in file: 112130
```

### js on windows

I used `cd build_js; node .\main.js` on windows. The result was also

```
File at data.json
Number of lines in file: 112130
```
