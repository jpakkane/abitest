project('abitest', 'cpp')

abi1 = shared_library('abi1', 'abi1.cpp')
abi2 = shared_library('abi2', 'abi2.cpp')

foo = shared_library('foo', 'foo.cpp', link_with: abi1)
bar = shared_library('bar', 'bar.cpp', link_with: abi2)

executable('main', 'main.cpp',
  link_with: [foo, bar])
