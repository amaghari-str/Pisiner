#!/bin/bash

set -e

echo "Останавливаем Ollama..."
sudo systemctl stop ollama 2>/dev/null || true
sudo systemctl disable ollama 2>/dev/null || true

echo "Удаляем systemd-конфигурацию..."
sudo rm -rf /etc/systemd/system/ollama.service.d
sudo rm -f /etc/systemd/system/ollama.service
sudo systemctl daemon-reload

echo "Удаляем программу..."
sudo rm -f /usr/local/bin/ollama

echo "Удаляем модели..."
sudo rm -rf /opt/ollama

echo "Удаляем старую папку моделей..."
rm -rf "$HOME/AI/models"

echo "Удаляем пользователя ollama..."
sudo userdel ollama 2>/dev/null || true
sudo groupdel ollama 2>/dev/null || true

echo "Готово!"
sudo apt install ppa-purge
sudo ppa-purge ppa:kisak/kisak-mesa
