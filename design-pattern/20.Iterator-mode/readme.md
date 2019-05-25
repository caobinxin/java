#### 迭代器模式 

    迭代器模式 ，提供一种方法顺序访问一个聚合对象中的各个元素，而又不暴露该对象的内部表示。

    当需要访问一个聚集对象，而且不管这些对象是什么都需要遍历的时候，你就应该考虑用迭代器模式。


    迭代器模式 就是分离了集合对象的遍历行为，抽象出一个迭代器类来负责，这样既可以做到不暴露 集合的内部结构，又可让外部的代码透明地访问 集合内部的数据。

    迭代器模式在访问 数组，集合、列表等数据的时候，尤其是数据库数据操作时，是非常普遍的应用，
