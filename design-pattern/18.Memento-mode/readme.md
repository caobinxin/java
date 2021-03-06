#### 备忘录模式

    在不破坏封装的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状体。这样以后就可将该对象恢复到原先保存的状态。

#### 备忘录模式 和clone 模式的区别

    用clone模式 来实现 保存的目的，就相当于对上层应用开放了 originator的全部public接口，这对于保存备份有时候是不合适的

    而用 备忘录模式 保存我们可以很好的进行封装  而且 如果保存的不是全部的信息，而只是部分信息，那么就应该用备忘录模式，它只拥有需要保存的信息的属性



#### 总结

    把要保存的细节给封装在了 Memento中了，那一天要更改 保存的细节也不影响 客户端的正常细节，

##### 使用的场合
    Memento模式比较适合用于功能比较复杂的，但需要维护或记录属性历史的类，或者需要保存的属性只是众多属性中的一小部分时，此时Originator可以根据保存的Memento信息还原到前一状态。

    如果在某个系统中使用命令模式时，需要实现命令的撤销功能，那么命令模式可以使用备忘录模式来存储可撤销操作的状态，

    有时一些对象的内部信息必须保存在对象以外的地方，但是必须要由对象自己读取，这时，使用备忘录可以把复杂的对象内部信息对其他的对象屏蔽起来。从而可以恰当地保持封装的边界。

    当角色的状态改变的时候，有可能这个状态无效，这时候就可以使用暂时存储起来的备忘录将状态复原。



#### 备忘录模式的缺点

    角色状态需要完整存储到备忘录对象中，如果状态数据很大很多，那么在资源消耗上，备忘录对象会非常消耗内存的。