class ObserverStock extends Observer{
    
    public ObserverStock(String name, ISubject sub){
        super(name, sub);
    }
    
    @Override
    public void onWork() {
        System.out.println("关闭正在抄的股");
    }
}