--[[ Создание операции сложения для таблиц ]]
-- Операнды
t1 = {1,2,3}     
t2 = {10,20,30}  
-- Создание метатаблицы
mt = {}
-- Запись в метатаблицу метаметода "__add"
mt.__add = function(a, b) 
             local res = {}
             for k in pairs(a) do res[k] = a[k] + b[k] end
             return res
           end
-- Привязка метатаблицы к таблице t1
setmetatable(t1, mt)

-- Теперь сложение таблиц - корректная операция
t3 = t1 + t2
-- соединяем с t3 метатаблицу с метаметодом __tostring
setmetatable(t3, {__tostring=function(t) 
                    local res = "\n"
                    for _,v in pairs(t) do 
                      res = res .. tostring(v) .. "-"
                    end
                    return res.."\n"
                  end})
-- В результате будет выведено: "11,22,33,"
for _,v in ipairs(t3) do 
  io.write (v,",")
end
print(tostring(t3))  -- выведет "11-22-33-"