### 建造者模式  生成器模式

    抽象不应该依赖细节，细节应该依赖于抽象

    如果你需要将一个复杂对象的构建与它的表象分离，使得同样的构建过程可以创建不同的表示的意图时，我们需要应用于一个 建造者模式，又叫做生成器模式。建造者模式可以将一个产品的内部表象与产品的生成过程分割开来，从而可以使一个建造者生成具有不同的内部表象的产品对象。

    如果我们用了建造者模式，那么用户就只需指定需要建造的类型就可以得到他们，而具体建造的过程和细节就不需要知道了。

    建造者模式，将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。

    建造者模式是在当创建复杂对象的算法应该独立于该对象的组成部分以及他们的装配方式时适用的模式。